/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@interface BLActivityAlert : BLAlert {
    UIActivityIndicatorView * _activityIndicatorView;
    bool  _hasActivity;
    double  _progress;
    UIProgressView * _progressView;
    int  _type;
}

- (void).cxx_destruct;
- (int)activityType;
- (id)initWithType:(int)arg1 title:(id)arg2 cancelAction:(id)arg3;
- (id)initWithType:(int)arg1 title:(id)arg2 options:(int)arg3 cancelAction:(id)arg4;
- (void)setActivityType:(int)arg1;
- (void)setHasActivity:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setTitle:(id)arg1;

@end
