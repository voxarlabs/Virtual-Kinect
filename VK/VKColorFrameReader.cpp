#include "VKColorFrameReader.h"
#include "VKColorFrame.h"
#include "VKKinectSensor.h"

HRESULT STDMETHODCALLTYPE VKColorFrameReader::SubscribeFrameArrived(_Out_  WAITABLE_HANDLE* waitableHandle) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrameReader::UnsubscribeFrameArrived(_In_  WAITABLE_HANDLE waitableHandle) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrameReader::GetFrameArrivedEventData(_In_  WAITABLE_HANDLE waitableHandle, _Out_  IColorFrameArrivedEventArgs** eventData) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrameReader::AcquireLatestFrame(_COM_Outptr_  IColorFrame** colorFrame) {
	/*if (!videoCapture.isOpened()) {
		videoCapture.open(0,cv::CAP_DSHOW);
		cv::Mat* img = new cv::Mat();
		videoCapture.read(*img);
		this->colorFrame = new VKColorFrame(img);
		*colorFrame = this->colorFrame;
	}
	else {
		videoCapture.read(*this->colorFrame->frame);
	}*/
	if (this->colorFrame == NULL) {
		this->colorFrame = new VKColorFrame();
		*colorFrame = this->colorFrame;
	}

	memcpy(this->colorFrame->data, ((VKKinectSensor*)this->kinectSensor)->pBuf, 640 * 480 * 3);
			
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrameReader::get_IsPaused(_Out_  BOOLEAN* isPaused) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrameReader::put_IsPaused(BOOLEAN isPaused) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrameReader::get_ColorFrameSource(_COM_Outptr_  IColorFrameSource** colorFrameSource) {
	// TODO
	return 0;
}

HRESULT STDMETHODCALLTYPE VKColorFrameReader::QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject) {
	// TODO
	return 0;
}
ULONG STDMETHODCALLTYPE VKColorFrameReader::AddRef(void) {
	// TODO
	return 0;
}
ULONG STDMETHODCALLTYPE VKColorFrameReader::Release(void) {
	// TODO
	return 0;
}