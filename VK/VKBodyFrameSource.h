#pragma once
#include "VKKinect.h"
class VKBodyFrameSource :
    public IBodyFrameSource
{
    HRESULT STDMETHODCALLTYPE SubscribeFrameCaptured(_Out_  WAITABLE_HANDLE* waitableHandle);
    HRESULT STDMETHODCALLTYPE UnsubscribeFrameCaptured(_In_  WAITABLE_HANDLE waitableHandle);
    HRESULT STDMETHODCALLTYPE GetFrameCapturedEventData(_In_  WAITABLE_HANDLE waitableHandle, _Out_  IFrameCapturedEventArgs** eventData);
    HRESULT STDMETHODCALLTYPE get_IsActive(_Out_  BOOLEAN* isActive);
    HRESULT STDMETHODCALLTYPE get_BodyCount(_Out_  INT32* bodyCount);
    HRESULT STDMETHODCALLTYPE OpenReader(_COM_Outptr_  IBodyFrameReader** reader);
    HRESULT STDMETHODCALLTYPE get_KinectSensor(_COM_Outptr_  IKinectSensor** sensor);
    HRESULT STDMETHODCALLTYPE OverrideHandTracking(UINT64 trackingId);
    HRESULT STDMETHODCALLTYPE OverrideAndReplaceHandTracking(UINT64 oldTrackingId, UINT64 newTrackingId);
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject);
    ULONG STDMETHODCALLTYPE AddRef(void);
    ULONG STDMETHODCALLTYPE Release(void);

public:
    IKinectSensor* kinectSensor;

};

