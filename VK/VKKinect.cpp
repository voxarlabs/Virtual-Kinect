#include "VKKinect.h"
#include "VKKinectSensor.h"

extern "C" HRESULT VK_API WINAPI GetDefaultKinectSensor(_COM_Outptr_ IKinectSensor * *defaultKinectSensor) {
	*defaultKinectSensor = new VKKinectSensor();
	return 0;
}