#include "VKKinectSensor.h"
#include "VKColorFrameSource.h"
#include "VKBodyFrameSource.h"

#include <stdio.h>

#define BUF_SIZE 640*480*3+33*4*4

TCHAR szName[] = TEXT("VirtualKinectInfo");

HRESULT STDMETHODCALLTYPE VKKinectSensor::SubscribeIsAvailableChanged(_Out_  WAITABLE_HANDLE* waitableHandle) {
	// TODO
	return 0;
}

HRESULT STDMETHODCALLTYPE VKKinectSensor::UnsubscribeIsAvailableChanged(_In_  WAITABLE_HANDLE waitableHandle) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::GetIsAvailableChangedEventData(_In_  WAITABLE_HANDLE waitableHandle, _Out_  IIsAvailableChangedEventArgs** eventData) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::Open(void) {
	// TODO
	HANDLE hMapFile;

	hMapFile = CreateFileMapping(
		INVALID_HANDLE_VALUE,    // use paging file
		NULL,                    // default security
		PAGE_READWRITE,          // read/write access
		0,                       // maximum object size (high-order DWORD)
		BUF_SIZE,                // maximum object size (low-order DWORD)
		szName);                 // name of mapping object

	if (hMapFile == NULL)
	{
		printf("Could not create file mapping object (%d).\n", GetLastError());
		return -1;
	}
	pBuf = (char*)MapViewOfFile(hMapFile,   // handle to map object
		FILE_MAP_ALL_ACCESS, // read/write permission
		0,
		0,
		BUF_SIZE);

	if (pBuf == NULL)
	{
		printf("Could not map view of file (%d).\n", GetLastError());

		CloseHandle(hMapFile);

		return -1;
	}

	//Mat* frame = new Mat(480, 640, CV_8UC3, pBuf);

	joints = (float*)&pBuf[640 * 480 * 3];

	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::Close(void) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::get_IsOpen(_Out_  BOOLEAN* isOpen) {
	*isOpen = this->pBuf != NULL;
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::get_IsAvailable(_Out_  BOOLEAN* isAvailable) {
	*isAvailable = this->pBuf != NULL;
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::get_ColorFrameSource(_COM_Outptr_  IColorFrameSource** colorFrameSource) {
	VKColorFrameSource* cfs = new VKColorFrameSource();
	cfs->kinectSensor = this;
	*colorFrameSource = cfs;
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::get_DepthFrameSource(_COM_Outptr_  IDepthFrameSource** depthFrameSource) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::get_BodyFrameSource(_COM_Outptr_  IBodyFrameSource** bodyFrameSource) {
	VKBodyFrameSource *bfs = new VKBodyFrameSource();
	bfs->kinectSensor = this;
	*bodyFrameSource = bfs;
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::get_BodyIndexFrameSource(_COM_Outptr_  IBodyIndexFrameSource** bodyIndexFrameSource) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::get_InfraredFrameSource(_COM_Outptr_  IInfraredFrameSource** infraredFrameSource) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::get_LongExposureInfraredFrameSource(_COM_Outptr_  ILongExposureInfraredFrameSource** longExposureInfraredFrameSource) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::get_AudioSource(_COM_Outptr_  IAudioSource** audioSource) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::OpenMultiSourceFrameReader(DWORD enabledFrameSourceTypes, _COM_Outptr_  IMultiSourceFrameReader** multiSourceFrameReader) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::get_CoordinateMapper(_COM_Outptr_  ICoordinateMapper** coordinateMapper) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::get_UniqueKinectId(UINT bufferSize, _Out_writes_z_(bufferSize)  WCHAR* uniqueKinectId) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKKinectSensor::get_KinectCapabilities(_Out_  DWORD* capabilities) {
	// TODO
	return 0;
}

HRESULT STDMETHODCALLTYPE VKKinectSensor::QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject) {
	// TODO
	return 0;
}
ULONG STDMETHODCALLTYPE VKKinectSensor::AddRef(void) {
	// TODO
	return 0;
}
ULONG STDMETHODCALLTYPE VKKinectSensor::Release(void) {
	// TODO
	return 0;
}