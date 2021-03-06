/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHVideoRequest : PHImageManagerRequest {
    PHVideoRequestOptions * _options;
    id /* block */  _resultHandler;
}

@property (nonatomic, readonly) PHVideoRequestOptions *options;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;

+ (id)videoRequestWithAsset:(id)arg1 options:(id)arg2 domain:(id)arg3 resultHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)clearResultHandler;
- (void)cloneIDAndResultHandlerFromRequest:(id)arg1;
- (id)description;
- (id)initVideoRequestWithAsset:(id)arg1 options:(id)arg2 domain:(id)arg3 resultHandler:(id /* block */)arg4;
- (bool)isVideo;
- (id)options;
- (id /* block */)resultHandler;

@end
