/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMediaPlaybackController : NSObject <SXViewportChangeListener> {
    <SXMediaPlaybackDelegate> * _mediaPlaybackDelegate;
    SXViewport * _viewport;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SXMediaPlaybackDelegate> *mediaPlaybackDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (id)initWithViewport:(id)arg1;
- (id)mediaPlaybackDelegate;
- (void)registerMediaPlayBack:(id)arg1;
- (void)setMediaPlaybackDelegate:(id)arg1;
- (id)viewport;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;

@end
