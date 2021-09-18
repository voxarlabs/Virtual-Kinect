#pragma once
#include "VKKinect.h"

class VKColorFrameSource :
    public IColorFrameSource
{
    HRESULT STDMETHODCALLTYPE SubscribeFrameCaptured(_Out_  WAITABLE_HANDLE* waitableHandle);
    HRESULT STDMETHODCALLTYPE UnsubscribeFrameCaptured(_In_  WAITABLE_HANDLE waitableHandle);
    HRESULT STDMETHODCALLTYPE GetFrameCapturedEventData(_In_  WAITABLE_HANDLE waitableHandle, _Out_  IFrameCapturedEventArgs** eventData);
    HRESULT STDMETHODCALLTYPE get_IsActive(_Out_  BOOLEAN* isActive);
    HRESULT STDMETHODCALLTYPE OpenReader(_COM_Outptr_  IColorFrameReader** reader);
    HRESULT STDMETHODCALLTYPE CreateFrameDescription(ColorImageFormat format, _COM_Outptr_  IFrameDescription** frameDescription);
    HRESULT STDMETHODCALLTYPE get_FrameDescription(_COM_Outptr_  IFrameDescription** rawFrameDescription);
    HRESULT STDMETHODCALLTYPE get_KinectSensor(_COM_Outptr_  IKinectSensor** sensor);

    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject);
    ULONG STDMETHODCALLTYPE AddRef(void);
    ULONG STDMETHODCALLTYPE Release(void);

public:
    IKinectSensor* kinectSensor;

};

