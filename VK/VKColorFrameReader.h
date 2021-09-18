#pragma once
#include "VKKinect.h"
#include "VKColorFrame.h"

#include <opencv2/highgui/highgui.hpp>

class VKColorFrameReader :
    public IColorFrameReader
{
    HRESULT STDMETHODCALLTYPE SubscribeFrameArrived(_Out_  WAITABLE_HANDLE* waitableHandle);
    HRESULT STDMETHODCALLTYPE UnsubscribeFrameArrived(_In_  WAITABLE_HANDLE waitableHandle);
    HRESULT STDMETHODCALLTYPE GetFrameArrivedEventData(_In_  WAITABLE_HANDLE waitableHandle, _Out_  IColorFrameArrivedEventArgs** eventData);
    HRESULT STDMETHODCALLTYPE AcquireLatestFrame(_COM_Outptr_  IColorFrame** colorFrame);
    HRESULT STDMETHODCALLTYPE get_IsPaused(_Out_  BOOLEAN* isPaused);
    HRESULT STDMETHODCALLTYPE put_IsPaused(BOOLEAN isPaused);
    HRESULT STDMETHODCALLTYPE get_ColorFrameSource(_COM_Outptr_  IColorFrameSource** colorFrameSource);

    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject);
    ULONG STDMETHODCALLTYPE AddRef(void);
    ULONG STDMETHODCALLTYPE Release(void);

    //cv::VideoCapture videoCapture;
public:
    VKColorFrame* colorFrame = NULL;
    IColorFrameSource* frameSource;
    IKinectSensor* kinectSensor;

};

