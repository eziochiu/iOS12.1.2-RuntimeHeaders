/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMMotionController : NSObject <BKSAccelerometerDelegate, CAMLevelViewModelChangeObserver> {
    BKSAccelerometer * __accelerometer;
    long long  __cachedCaptureOrientation;
    bool  __didNotifyCaptureOrientationWasInvalid;
    long long  __fallbackCaptureOrientation;
    CMMotionManager * __levelMotionManager;
    long long  __numberOfDominantPhysicalButtonObservers;
    CMMotionManager * __physicalButtonMotionManager;
    CAMLevelViewModel * _activeLevelViewModel;
    long long  _dominantPhysicalButton;
}

@property (setter=_setAccelerometer:, nonatomic, retain) BKSAccelerometer *_accelerometer;
@property (setter=_setCachedCaptureOrientation:, nonatomic) long long _cachedCaptureOrientation;
@property (setter=_setDidNotifyCaptureOrientationWasInvalid:, nonatomic) bool _didNotifyCaptureOrientationWasInvalid;
@property (nonatomic, readonly) long long _fallbackCaptureOrientation;
@property (nonatomic, readonly) CMMotionManager *_levelMotionManager;
@property (setter=_setNumberOfDominantPhysicalButtonObservers:, nonatomic) long long _numberOfDominantPhysicalButtonObservers;
@property (nonatomic, readonly) CMMotionManager *_physicalButtonMotionManager;
@property (setter=_setActiveLevelViewModel:, nonatomic, retain) CAMLevelViewModel *activeLevelViewModel;
@property (nonatomic, readonly) long long captureOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (setter=_setDominantPhysicalButton:, nonatomic) long long dominantPhysicalButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long panoramaCaptureOrientation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_accelerometer;
- (long long)_cachedCaptureOrientation;
- (id)_debugStringForDeviceOrientation:(long long)arg1;
- (id)_debugStringForInterfaceOrientation:(long long)arg1;
- (bool)_didNotifyCaptureOrientationWasInvalid;
- (long long)_fallbackCaptureOrientation;
- (void)_handleLevelMotionUpdate:(id)arg1 error:(id)arg2;
- (id)_levelMotionManager;
- (long long)_numberOfDominantPhysicalButtonObservers;
- (id)_physicalButtonMotionManager;
- (void)_setAccelerometer:(id)arg1;
- (void)_setActiveLevelViewModel:(id)arg1;
- (void)_setCachedCaptureOrientation:(long long)arg1;
- (void)_setDidNotifyCaptureOrientationWasInvalid:(bool)arg1;
- (void)_setDominantPhysicalButton:(long long)arg1;
- (void)_setNumberOfDominantPhysicalButtonObservers:(long long)arg1;
- (void)_updateLevelMotionManagerFrequency;
- (void)_updatePhysicalButtonObservation;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (id)activeLevelViewModel;
- (void)beginGeneratingDominantPhysicalButtonNotifications;
- (void)beginUpdatingLevelViewModel:(id)arg1;
- (long long)captureOrientation;
- (void)dealloc;
- (void)debugValidateCaptureOrientationForMode:(long long)arg1;
- (long long)dominantPhysicalButton;
- (void)endGeneratingDominantPhysicalButtonNotifications;
- (void)endUpdatingActiveLevelViewModel;
- (id)init;
- (void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void*)arg3;
- (long long)panoramaCaptureOrientation;

@end