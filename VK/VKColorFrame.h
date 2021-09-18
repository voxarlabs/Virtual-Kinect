#pragma once
#include "VKKinect.h"

#include <opencv2/core/core.hpp>

class VKColorFrame :
    public IColorFrame
{
public: 
    VKColorFrame();
    //VKColorFrame(cv::Mat *frame);

    HRESULT STDMETHODCALLTYPE get_RawColorImageFormat(_Out_  ColorImageFormat* rawColorImageFormat);
    HRESULT STDMETHODCALLTYPE get_FrameDescription(_COM_Outptr_  IFrameDescription** rawFrameDescription);
    HRESULT STDMETHODCALLTYPE CopyRawFrameDataToArray(UINT capacity, _Out_writes_all_(capacity)  BYTE* frameData);
    HRESULT STDMETHODCALLTYPE AccessRawUnderlyingBuffer(_Out_  UINT* capacity, _Outptr_result_buffer_(*capacity)  BYTE** buffer);
    HRESULT STDMETHODCALLTYPE CopyConvertedFrameDataToArray(UINT capacity, _Out_writes_all_(capacity)  BYTE* frameData, ColorImageFormat colorFormat);
    HRESULT STDMETHODCALLTYPE CreateFrameDescription(ColorImageFormat format, _COM_Outptr_  IFrameDescription** frameDescription);
    HRESULT STDMETHODCALLTYPE get_ColorCameraSettings(_COM_Outptr_  IColorCameraSettings** colorCameraSettings);
    HRESULT STDMETHODCALLTYPE get_RelativeTime(_Out_  TIMESPAN* relativeTime);
    HRESULT STDMETHODCALLTYPE get_ColorFrameSource(_COM_Outptr_  IColorFrameSource** colorFrameSource);
    
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject);
    ULONG STDMETHODCALLTYPE AddRef(void);
    ULONG STDMETHODCALLTYPE Release(void);

    //cv::Mat* frame;
    char* data = NULL;
};

