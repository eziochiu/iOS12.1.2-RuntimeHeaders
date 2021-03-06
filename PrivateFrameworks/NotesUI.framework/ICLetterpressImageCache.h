/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICLetterpressImageCache : NSObject {
    NSMutableDictionary * _imageCache;
    CPBitmapStore * _serializedCache;
}

@property (nonatomic, retain) NSMutableDictionary *imageCache;
@property (nonatomic, retain) CPBitmapStore *serializedCache;

+ (id)letterpressedImageForImage:(id)arg1 tintColor:(id)arg2 scale:(double)arg3;
+ (id)serializedCacheKeyForImageNamed:(id)arg1 tintColor:(id)arg2 scale:(double)arg3;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)imageCache;
- (id)imageNamed:(id)arg1 tintColor:(id)arg2 version:(unsigned long long)arg3;
- (id)init;
- (void)purge;
- (id)serializedCache;
- (void)setImageCache:(id)arg1;
- (void)setSerializedCache:(id)arg1;

@end
