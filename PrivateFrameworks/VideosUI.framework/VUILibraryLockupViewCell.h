/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibraryLockupViewCell : UICollectionViewCell <VUIRentalExpirationLabelDelegate> {
    VUIRentalExpirationLabel * _expirationLabel;
    double  _imageAspectRatio;
    _TVImageView * _imageView;
    VUILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIRentalExpirationLabel *expirationLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) double imageAspectRatio;
@property (nonatomic, retain) _TVImageView *imageView;
@property (readonly) Class superclass;
@property (nonatomic, retain) VUILabel *titleLabel;

+ (void)configureLockupCell:(id)arg1 withMedia:(id)arg2 width:(double)arg3 forMetrics:(bool)arg4;

- (void).cxx_destruct;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (id)expirationLabel;
- (double)imageAspectRatio;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;
- (void)setExpirationLabel:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageAspectRatio:(double)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end
