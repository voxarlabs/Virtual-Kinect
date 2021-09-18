#include "VKColorFrame.h"

VKColorFrame::VKColorFrame() {
	this->data = new char[640*480*3];
}

//VKColorFrame::VKColorFrame(cv::Mat *frame) {
	//this->frame = frame;
//}

HRESULT STDMETHODCALLTYPE VKColorFrame::get_RawColorImageFormat(_Out_  ColorImageFormat* rawColorImageFormat) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrame::get_FrameDescription(_COM_Outptr_  IFrameDescription** rawFrameDescription) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrame::CopyRawFrameDataToArray(UINT capacity, _Out_writes_all_(capacity)  BYTE* frameData) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrame::AccessRawUnderlyingBuffer(_Out_  UINT* capacity, _Outptr_result_buffer_(*capacity)  BYTE** buffer) {
	*buffer = (BYTE*)this->data;
	*capacity = 640 * 480 * 3;
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrame::CopyConvertedFrameDataToArray(UINT capacity, _Out_writes_all_(capacity)  BYTE* frameData, ColorImageFormat colorFormat) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrame::CreateFrameDescription(ColorImageFormat format, _COM_Outptr_  IFrameDescription** frameDescription) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrame::get_ColorCameraSettings(_COM_Outptr_  IColorCameraSettings** colorCameraSettings) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrame::get_RelativeTime(_Out_  TIMESPAN* relativeTime) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKColorFrame::get_ColorFrameSource(_COM_Outptr_  IColorFrameSource** colorFrameSource) {
	// TODO
	return 0;
}

HRESULT STDMETHODCALLTYPE VKColorFrame::QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject) {
	// TODO
	return 0;
}
ULONG STDMETHODCALLTYPE VKColorFrame::AddRef(void) {
	// TODO
	return 0;
}
ULONG STDMETHODCALLTYPE VKColorFrame::Release(void) {
	// TODO
	return 0;
}
