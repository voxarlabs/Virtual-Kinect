#pragma once
#include "VKKinect.h"
class VKBody :
    public IBody
{
    HRESULT STDMETHODCALLTYPE GetJoints(_Pre_equal_to_(JointType_Count)  UINT capacity, _Out_writes_all_(capacity)  Joint* joints);
    HRESULT STDMETHODCALLTYPE GetJointOrientations(_Pre_equal_to_(JointType_Count)  UINT capacity, _Out_writes_all_(capacity)  JointOrientation* jointOrientations);
    HRESULT STDMETHODCALLTYPE get_Engaged(_Out_  DetectionResult* detectionResult);
    HRESULT STDMETHODCALLTYPE GetExpressionDetectionResults(_Pre_equal_to_(Expression_Count)  UINT capacity, _Out_writes_all_(capacity)  DetectionResult* detectionResults);
    HRESULT STDMETHODCALLTYPE GetActivityDetectionResults(_Pre_equal_to_(Activity_Count)  UINT capacity, _Out_writes_all_(capacity)  DetectionResult* detectionResults);
    HRESULT STDMETHODCALLTYPE GetAppearanceDetectionResults(_Pre_equal_to_(Appearance_Count)  UINT capacity, _Out_writes_all_(capacity)  DetectionResult* detectionResults);
    HRESULT STDMETHODCALLTYPE get_HandLeftState(_Out_  HandState* handState);
    HRESULT STDMETHODCALLTYPE get_HandLeftConfidence(_Out_  TrackingConfidence* confidence);
    HRESULT STDMETHODCALLTYPE get_HandRightState(_Out_  HandState* handState);
    HRESULT STDMETHODCALLTYPE get_HandRightConfidence(_Out_  TrackingConfidence* confidence);
    HRESULT STDMETHODCALLTYPE get_ClippedEdges(_Out_  DWORD* clippedEdges);
    HRESULT STDMETHODCALLTYPE get_TrackingId(_Out_  UINT64* trackingId);
    HRESULT STDMETHODCALLTYPE get_IsTracked(_Out_  BOOLEAN* tracked);
    HRESULT STDMETHODCALLTYPE get_IsRestricted(_Out_  BOOLEAN* isRestricted);
    HRESULT STDMETHODCALLTYPE get_Lean(_Out_  PointF* amount);
    HRESULT STDMETHODCALLTYPE get_LeanTrackingState(_Out_  TrackingState* trackingState);
    
    HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, _COM_Outptr_ void __RPC_FAR* __RPC_FAR* ppvObject);
    ULONG STDMETHODCALLTYPE AddRef(void);
    ULONG STDMETHODCALLTYPE Release(void);
};

