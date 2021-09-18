#include "VKBodyFrameReader.h"

HRESULT STDMETHODCALLTYPE VKBodyFrameReader::SubscribeFrameArrived(_Out_  WAITABLE_HANDLE* waitableHandle) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameReader::UnsubscribeFrameArrived(_In_  WAITABLE_HANDLE waitableHandle) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameReader::GetFrameArrivedEventData(_In_  WAITABLE_HANDLE waitableHandle, _Out_  IBodyFrameArrivedEventArgs** eventData) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameReader::AcquireLatestFrame(_COM_Outptr_  IBodyFrame** bodyFrame) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameReader::get_IsPaused(_Out_  BOOLEAN* isPaused) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameReader::put_IsPaused(BOOLEAN isPaused) {
	// TODO
	return 0;
}
HRESULT STDMETHODCALLTYPE VKBodyFrameReader::get_BodyFrameSource(_COM_Outptr_  IBodyFrameSource** bodyFrameSource) {
	// TODO
	return 0;
}

HRESULT STDMETHODCALLTYPE VKBodyFrameReader::QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject) {
	// TODO
	return 0;
}
ULONG STDMETHODCALLTYPE VKBodyFrameReader::AddRef(void) {
	// TODO
	return 0;
}
ULONG STDMETHODCALLTYPE VKBodyFrameReader::Release(void) {
	// TODO
	return 0;
}