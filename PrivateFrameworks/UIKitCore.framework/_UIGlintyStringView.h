/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIGlintyStringView : UIView {
    bool  _adjustsFontSizeToFitWidth;
    bool  _allowsLuminanceAdjustments;
    bool  _animating;
    bool  _animationRepeats;
    UIColor * _backgroundColor;
    UIView * _backgroundView;
    double  _blurAlpha;
    NSMutableSet * _blurHiddenRequesters;
    UIView * _blurView;
    UIImage * _chevron;
    UIColor * _chevronBackgroundColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _chevronFrame;
    long long  _chevronStyle;
    <_UIGlintyStringViewDelegate> * _delegate;
    UIView * _effectView;
    bool  _fading;
    UIFont * _font;
    bool  _hasCustomBackgroundColor;
    bool  _highlight;
    UIView * _highlightView;
    double  _horizontalPadding;
    UILabel * _label;
    struct CGSize { 
        double width; 
        double height; 
    }  _labelSize;
    _UILegibilitySettings * _legibilitySettings;
    bool  _needsTextUpdate;
    UIView * _reflectionImageView;
    UIView * _shimmerImageView;
    bool  _showing;
    UIView * _spotlightView;
    NSString * _text;
    int  _textIndex;
    NSString * _textLanguage;
    bool  _usesBackgroundDimming;
    _UIVibrantSettings * _vibrantSettings;
}

@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic) bool allowsLuminanceAdjustments;
@property (nonatomic) bool animating;
@property (nonatomic) bool animationRepeats;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic) double blurAlpha;
@property (nonatomic, retain) NSMutableSet *blurHiddenRequesters;
@property (nonatomic, retain) UIView *blurView;
@property (nonatomic, retain) UIImage *chevron;
@property (nonatomic, retain) UIColor *chevronBackgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } chevronFrame;
@property (nonatomic) long long chevronStyle;
@property (nonatomic) <_UIGlintyStringViewDelegate> *delegate;
@property (nonatomic, retain) UIView *effectView;
@property (nonatomic) bool fading;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) bool hasCustomBackgroundColor;
@property (nonatomic) bool highlight;
@property (nonatomic, retain) UIView *highlightView;
@property (nonatomic) double horizontalPadding;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } labelFrame;
@property (nonatomic) struct CGSize { double x1; double x2; } labelSize;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) bool needsTextUpdate;
@property (nonatomic, retain) UIView *reflectionImageView;
@property (nonatomic, retain) UIView *shimmerImageView;
@property (nonatomic) bool showing;
@property (nonatomic, retain) UIView *spotlightView;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) int textIndex;
@property (nonatomic, copy) NSString *textLanguage;
@property (nonatomic) bool usesBackgroundDimming;
@property (nonatomic, retain) _UIVibrantSettings *vibrantSettings;

- (void).cxx_destruct;
- (double)_chevronHeightWithMaxOffset;
- (id)_chevronImageForStyle:(long long)arg1;
- (double)_chevronPadding;
- (double)_chevronVerticalOffset;
- (double)_chevronWidthWithPadding;
- (double)_chevronWidthWithPaddingCompression:(double)arg1;
- (id)_highlightColor;
- (id)_highlightCompositingFilter;
- (struct CGSize { double x1; double x2; })_labelSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)_updateHighlight;
- (void)_updateLabelWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)addGlintyAnimations;
- (void)addReflectionAnimationToLayer:(id)arg1;
- (void)addShimmerAnimationToLayer:(id)arg1;
- (bool)adjustsFontSizeToFitWidth;
- (bool)allowsLuminanceAdjustments;
- (bool)animating;
- (bool)animationRepeats;
- (id)backgroundColor;
- (id)backgroundView;
- (double)baselineOffsetFromBottom;
- (double)baselineOffsetFromBottomWithSize:(struct CGSize { double x1; double x2; })arg1;
- (double)blurAlpha;
- (id)blurHiddenRequesters;
- (id)blurView;
- (id)chevron;
- (id)chevronBackgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chevronFrame;
- (long long)chevronStyle;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)effectView;
- (void)fadeIn;
- (void)fadeInWithDuration:(double)arg1;
- (void)fadeOut;
- (void)fadeOutWithDuration:(double)arg1;
- (bool)fading;
- (id)font;
- (bool)hasCustomBackgroundColor;
- (void)hide;
- (void)hideBlur;
- (void)hideEffects;
- (bool)highlight;
- (id)highlightView;
- (double)horizontalPadding;
- (id)initWithText:(id)arg1 andFont:(id)arg2;
- (bool)isAnimating;
- (id)label;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrame;
- (struct CGSize { double x1; double x2; })labelSize;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (bool)needsTextUpdate;
- (id)reflectionImageView;
- (void)removeGlintyAnimations;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAllowsLuminanceAdjustments:(bool)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setAnimationRepeats:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBlurAlpha:(double)arg1;
- (void)setBlurHidden:(bool)arg1 forRequester:(id)arg2;
- (void)setBlurHiddenRequesters:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setChevron:(id)arg1;
- (void)setChevronBackgroundColor:(id)arg1;
- (void)setChevronFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChevronStyle:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEffectView:(id)arg1;
- (void)setFading:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setHasCustomBackgroundColor:(bool)arg1;
- (void)setHighlight:(bool)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHorizontalPadding:(double)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setNeedsTextUpdate:(bool)arg1;
- (void)setReflectionImageView:(id)arg1;
- (void)setShimmerImageView:(id)arg1;
- (void)setShowing:(bool)arg1;
- (void)setSpotlightView:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextIndex:(int)arg1;
- (void)setTextLanguage:(id)arg1;
- (void)setUsesBackgroundDimming:(bool)arg1;
- (void)setVibrantSettings:(id)arg1;
- (id)shapeViewForCharactersInString:(id)arg1 withFont:(id)arg2 centeredInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)shimmerImageView;
- (void)show;
- (void)showBlur;
- (void)showEffects;
- (bool)showing;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)spotlightView;
- (void)startAnimating;
- (void)stopAnimating;
- (id)text;
- (int)textIndex;
- (id)textLanguage;
- (void)updateBlurForHiddenRequesters;
- (void)updateText;
- (void)updateTextWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)usesBackgroundDimming;
- (id)vibrantSettings;

@end