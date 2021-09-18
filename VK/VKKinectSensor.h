#pragma once
#include "VKKinect.h"
class VKKinectSensor :
    public IKinectSensor
{
public:
    HRESULT STDMETHODCALLTYPE SubscribeIsAvailableChanged(_Out_  WAITABLE_HANDLE* waitableHandle);
    HRESULT STDMETHODCALLTYPE UnsubscribeIsAvailableChanged(_In_  WAITABLE_HANDLE waitableHandle);
    HRESULT STDMETHODCALLTYPE GetIsAvailableChangedEventData(_In_  WAITABLE_HANDLE waitableHandle, _Out_  IIsAvailableChangedEventArgs** eventData);
    HRESULT STDMETHODCALLTYPE Open(void);
    HRESULT STDMETHODCALLTYPE Close(void);
    HRESULT STDMETHODCALLTYPE get_IsOpen(_Out_  BOOLEAN* isOpen);
    HRESULT STDMETHODCALLTYPE get_IsAvailable(_Out_  BOOLEAN* isAvailable);
    HRESULT STDMETHODCALLTYPE get_ColorFrameSource(_COM_Outptr_  IColorFrameSource** colorFrameSource);
    HRESULT STDMETHODCALLTYPE get_DepthFrameSource(_COM_Outptr_  IDepthFrameSource** depthFrameSource);
    HRESULT STDMETHODCALLTYPE get_BodyFrameSource(_COM_Outptr_  IBodyFrameSource** bodyFrameSource);
    HRESULT STDMETHODCALLTYPE get_BodyIndexFrameSource(_COM_Outptr_  IBodyIndexFrameSource** bodyIndexFrameSource);
    HRESULT STDMETHODCALLTYPE get_InfraredFrameSource(_COM_Outptr_  IInfraredFrameSource** infraredFrameSource);
    HRESULT STDMETHODCALLTYPE get_LongExposureInfraredFrameSource(_COM_Outptr_  ILongExposureInfraredFrameSource** longExposureInfraredFrameSource);
    HRESULT STDMETHODCALLTYPE get_AudioSource(_COM_Outptr_  IAudioSource** audioSource);
    HRESULT STDMETHODCALLTYPE OpenMultiSourceFrameReader(DWORD enabledFrameSourceTypes, _COM_Outptr_  IMultiSourceFrameReader** multiSourceFrameReader);
    HRESULT STDMETHODCALLTYPE get_CoordinateMapper(_COM_Outptr_  ICoordinateMapper** coordinateMapper);
    HRESULT STDMETHODCALLTYPE get_UniqueKinectId(UINT bufferSize, _Out_writes_z_(bufferSize)  WCHAR* uniqueKinectId);
    HRESULT STDMETHODCALLTYPE get_KinectCapabilities(_Out_  DWORD* capabilities);

    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject);
    ULONG STDMETHODCALLTYPE AddRef(void);
    ULONG STDMETHODCALLTYPE Release(void);

public:
    char* pBuf = NULL;
    float* joints = NULL;
};

