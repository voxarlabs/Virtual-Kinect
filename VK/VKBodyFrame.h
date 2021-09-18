#pragma once
#include "VKKinect.h"
class VKBodyFrame :
    public IBodyFrame
{
    HRESULT STDMETHODCALLTYPE GetAndRefreshBodyData(UINT capacity, _Inout_updates_all_(capacity)  IBody** bodies);
    HRESULT STDMETHODCALLTYPE get_FloorClipPlane(_Out_  Vector4* floorClipPlane);
    HRESULT STDMETHODCALLTYPE get_RelativeTime(_Out_  TIMESPAN* relativeTime);
    HRESULT STDMETHODCALLTYPE get_BodyFrameSource(_COM_Outptr_  IBodyFrameSource** bodyFrameSource);

    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject);
    ULONG STDMETHODCALLTYPE AddRef(void) = 0;
    ULONG STDMETHODCALLTYPE Release(void) = 0;
};

