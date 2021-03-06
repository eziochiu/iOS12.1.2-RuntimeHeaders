/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSPrimaryManeuverView : CPSManeuverView {
    CPSAbridgableLabel * _distanceLabel;
    CPSAbridgableLabel * _instructionLabel;
    CPManeuver * _maneuver;
    UIImageView * _symbolView;
    CPSAbridgableLabel * _titleLabel;
}

@property (nonatomic, readonly) CPSAbridgableLabel *distanceLabel;
@property (nonatomic, retain) CPSAbridgableLabel *instructionLabel;
@property (nonatomic, retain) CPManeuver *maneuver;
@property (nonatomic, retain) UIImageView *symbolView;
@property (nonatomic, retain) CPSAbridgableLabel *titleLabel;

- (void).cxx_destruct;
- (id)_formattedDistance;
- (void)backgroundColorDidChange;
- (id)distanceLabel;
- (id)initWithManeuver:(id)arg1 minimalMode:(bool)arg2 style:(long long)arg3;
- (id)instructionLabel;
- (id)maneuver;
- (void)setCurrentTravelEstimates:(id)arg1;
- (void)setInstructionLabel:(id)arg1;
- (void)setManeuver:(id)arg1;
- (void)setSymbolView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)symbolView;
- (id)titleLabel;

@end
