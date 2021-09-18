#include "VKColorFrameSource.h"
#include "VKColorFrameReader.h"

HRESULT STDMETHODCALLTYPE VKColorFrameSource::SubscribeFrameCaptured(_Out_  WAITABLE_HANDLE* waitableHandle) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrameSource::UnsubscribeFrameCaptured(_In_  WAITABLE_HANDLE waitableHandle) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrameSource::GetFrameCapturedEventData(_In_  WAITABLE_HANDLE waitableHandle, _Out_  IFrameCapturedEventArgs** eventData) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrameSource::get_IsActive(_Out_  BOOLEAN* isActive) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrameSource::OpenReader(_COM_Outptr_  IColorFrameReader** reader) {
	VKColorFrameReader* cfr = new VKColorFrameReader();
	cfr->frameSource = this;
	cfr->kinectSensor = this->kinectSensor;
	*reader = cfr;
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrameSource::CreateFrameDescription(ColorImageFormat format, _COM_Outptr_  IFrameDescription** frameDescription) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrameSource::get_FrameDescription(_COM_Outptr_  IFrameDescription** rawFrameDescription) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrameSource::get_KinectSensor(_COM_Outptr_  IKinectSensor** sensor) {
	*sensor = this->kinectSensor;
	return 0;
}

HRESULT STDMETHODCALLTYPE VKColorFrameSource::QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject) {
	// TODO
	return 0;
}
ULONG STDMETHODCALLTYPE VKColorFrameSource::AddRef(void) {
	// TODO
	return 0;
}
ULONG STDMETHODCALLTYPE VKColorFrameSource::Release(void) {
	// TODO
	return 0;
}