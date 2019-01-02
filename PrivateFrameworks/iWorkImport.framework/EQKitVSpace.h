/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface EQKitVSpace : EQKitBox {
    double  mDepth;
    double  mHeight;
}

@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double layoutDepth;
@property (nonatomic, readonly) double layoutHeight;

- (bool)appendOpticalAlignToSpec:(struct Spec { struct vector<EQKit::OpticalKern::Spec::Entry, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry {} *x_1_1_1; struct Entry {} *x_1_1_2; struct __compressed_pair<EQKit::OpticalKern::Spec::Entry *, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry {} *x_3_2_1; } x_1_1_3; } x1; unsigned int x2; }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)depth;
- (id)description;
- (double)height;
- (id)init;
- (id)initWithHeight:(double)arg1 depth:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)layoutDepth;
- (double)layoutHeight;

@end