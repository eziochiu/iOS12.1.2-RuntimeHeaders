/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMURLConfigurationRequest : NSObject {
    long long  _requestedCaptureDevice;
    long long  _requestedCaptureMode;
    bool  _wantsQRCodeForSession;
}

@property (nonatomic, readonly) long long requestedCaptureDevice;
@property (nonatomic, readonly) long long requestedCaptureMode;
@property (nonatomic, readonly) bool wantsQRCodeForSession;

- (long long)_captureDeviceFromString:(id)arg1 outCaptureDevice:(long long*)arg2;
- (bool)_captureModeFromString:(id)arg1 outCaptureMode:(long long*)arg2;
- (bool)_initializeFromQueryDictionary:(id)arg1;
- (id)initWithQueryDictionary:(id)arg1;
- (long long)requestedCaptureDevice;
- (long long)requestedCaptureMode;
- (bool)wantsQRCodeForSession;

@end