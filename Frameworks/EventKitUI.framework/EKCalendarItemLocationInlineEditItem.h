/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarItemLocationInlineEditItem : EKCalendarItemEditItem <EKCalendarItemInlineEditItem, EKEditItemViewControllerDelegate, EKEventDetailPredictedLocationCellDelegate, UITextFieldDelegate> {
    EKRequestAvailabilityOperation * _availabilityRequest;
    NSArray * _availabilitySpansForLocation;
    UIView * _clearButtonView;
    EKUILocationEditItemCell * _conferenceLocationCell;
    EKParticipant * _conferenceRoom;
    long long  _conferenceRoomAvailabilityType;
    UITableViewCell * _nonConferenceLocationCell;
    bool  _sourceSupportsAvailabilityRequests;
    EKEventDetailPredictedLocationCell * _suggestedLocationCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_locationPlaceholder;

- (void).cxx_destruct;
- (void)_clearButtonTapped;
- (id)_clearButtonView;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (id)_makeCell:(unsigned long long)arg1;
- (void)_refreshConferenceRoomCell;
- (void)_setNewStructuredLocation:(id)arg1;
- (bool)_showConferenceLocationCell;
- (bool)_showSuggestedLocationCell;
- (void)_updateAvailabilityInformation;
- (void)_updateLocationWithConferenceRoom:(id)arg1;
- (void)_updateLocationWithStructuredLocation:(id)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)editItemViewControllerSave:(id)arg1;
- (bool)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2;
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2;
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1;
- (bool)forceRefreshStartAndEndDatesOnSave;
- (id)init;
- (bool)isInline;
- (bool)isSaveable;
- (bool)isSubitemAtIndexSaveable:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (void)refreshFromCalendarItemAndStore;
- (void)reset;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (id)searchStringForEventAutocomplete;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;

@end