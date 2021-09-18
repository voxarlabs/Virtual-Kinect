#pragma once
#include "VKKinect.h"
#include "VKBodyFrame.h"

class VKBodyFrameReader :
    public IBodyFrameReader
{
    HRESULT STDMETHODCALLTYPE SubscribeFrameArrived(_Out_  WAITABLE_HANDLE* waitableHandle);
    HRESULT STDMETHODCALLTYPE UnsubscribeFrameArrived(_In_  WAITABLE_HANDLE waitableHandle);
    HRESULT STDMETHODCALLTYPE GetFrameArrivedEventData(_In_  WAITABLE_HANDLE waitableHandle, _Out_  IBodyFrameArrivedEventArgs** eventData);
    HRESULT STDMETHODCALLTYPE AcquireLatestFrame(_COM_Outptr_  IBodyFrame** bodyFrame);
    HRESULT STDMETHODCALLTYPE get_IsPaused(_Out_  BOOLEAN* isPaused);
    HRESULT STDMETHODCALLTYPE put_IsPaused(BOOLEAN isPaused);
    HRESULT STDMETHODCALLTYPE get_BodyFrameSource(_COM_Outptr_  IBodyFrameSource** bodyFrameSource);
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject);
    ULONG STDMETHODCALLTYPE AddRef(void);
    ULONG STDMETHODCALLTYPE Release(void);

public:
    VKBodyFrame* bodyFrame = NULL;
    IBodyFrameSource* frameSource;
    IKinectSensor* kinectSensor;

};

