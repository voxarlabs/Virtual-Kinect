#include "VKBodyFrameSource.h"
#include "VKBodyFrameReader.h"

HRESULT STDMETHODCALLTYPE VKBodyFrameSource::SubscribeFrameCaptured(_Out_  WAITABLE_HANDLE* waitableHandle) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameSource::UnsubscribeFrameCaptured(_In_  WAITABLE_HANDLE waitableHandle) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameSource::GetFrameCapturedEventData(_In_  WAITABLE_HANDLE waitableHandle, _Out_  IFrameCapturedEventArgs** eventData) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameSource::get_IsActive(_Out_  BOOLEAN* isActive) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameSource::get_BodyCount(_Out_  INT32* bodyCount) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameSource::OpenReader(_COM_Outptr_  IBodyFrameReader** reader) {
	VKBodyFrameReader* bfr = new VKBodyFrameReader();
	bfr->frameSource = this;
	bfr->kinectSensor = this->kinectSensor;
	*reader = bfr;
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameSource::get_KinectSensor(_COM_Outptr_  IKinectSensor** sensor) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameSource::OverrideHandTracking(UINT64 trackingId) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameSource::OverrideAndReplaceHandTracking(UINT64 oldTrackingId, UINT64 newTrackingId) {
	// TODO
	return 0;
}

HRESULT STDMETHODCALLTYPE VKBodyFrameSource::QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject) {
	// TODO
	return 0;
}
ULONG STDMETHODCALLTYPE VKBodyFrameSource::AddRef(void) {
	// TODO
	return 0;
}
ULONG STDMETHODCALLTYPE VKBodyFrameSource::Release(void) {
	// TODO
	return 0;
}