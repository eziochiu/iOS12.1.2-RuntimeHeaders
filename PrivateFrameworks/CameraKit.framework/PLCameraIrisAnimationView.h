/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface PLCameraIrisAnimationView : UIView {
    id  irisAnimationDelegate;
    SEL  irisAnimationDidStopSelector;
    double  irisAnimationDuration;
    struct CGPoint { 
        double x; 
        double y; 
    }  irisAnimationPosition;
    bool  shouldSetupAnimationInDidMoveToWindow;
}

@property (nonatomic) id irisAnimationDelegate;
@property (nonatomic) SEL irisAnimationDidStopSelector;
@property (nonatomic) double irisAnimationDuration;
@property (nonatomic) struct CGPoint { double x1; double x2; } irisAnimationPosition;
@property (nonatomic) bool shouldSetupAnimationInDidMoveToWindow;

- (void)animateIrisOpen;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)irisAnimationDelegate;
- (SEL)irisAnimationDidStopSelector;
- (double)irisAnimationDuration;
- (struct CGPoint { double x1; double x2; })irisAnimationPosition;
- (void)pauseIrisAnimation;
- (void)setIrisAnimationDelegate:(id)arg1;
- (void)setIrisAnimationDidStopSelector:(SEL)arg1;
- (void)setIrisAnimationDuration:(double)arg1;
- (void)setIrisAnimationPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setShouldSetupAnimationInDidMoveToWindow:(bool)arg1;
- (void)setupAnimation;
- (bool)shouldSetupAnimationInDidMoveToWindow;
- (void)unpauseIrisAnimation;

@end