/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryTextView : EMKTextView {
    double  _adjustedLineFragmentPadding;
    NSString * _autocorrectionContext;
    bool  _hideCaret;
    double  _placeHolderWidth;
    UIColor * _placeholderColor;
    double  _placeholderExpandedWidth;
    UILabel * _placeholderLabel;
    NSString * _responseContext;
    UIKeyboardInputMode * _savedKeyboardInputMode;
    bool  _sendCurrentLocationFromKeyboardEnabled;
    bool  _showingDictationPlaceholder;
    bool  _updatesFontOnTextChange;
}

@property (nonatomic) double adjustedLineFragmentPadding;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic, copy) NSAttributedString *compositionText;
@property (nonatomic) bool hideCaret;
@property (nonatomic) double placeHolderWidth;
@property (nonatomic, copy) UIColor *placeholderColor;
@property (nonatomic) double placeholderExpandedWidth;
@property (nonatomic, retain) UILabel *placeholderLabel;
@property (nonatomic, copy) NSString *placeholderText;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic, retain) UIKeyboardInputMode *savedKeyboardInputMode;
@property (nonatomic) bool sendCurrentLocationFromKeyboardEnabled;
@property (getter=isShowingDictationPlaceholder, nonatomic) bool showingDictationPlaceholder;
@property (getter=isSingleLine, nonatomic, readonly) bool singleLine;
@property (nonatomic) bool updatesFontOnTextChange;

- (void).cxx_destruct;
- (SEL)_sendCurrentLocationAction;
- (double)adjustedLineFragmentPadding;
- (id)autocorrectionContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)compositionText;
- (void)dealloc;
- (bool)hideCaret;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)insertDictationResultPlaceholder;
- (bool)isShowingDictationPlaceholder;
- (bool)isSingleLine;
- (void)layoutSubviews;
- (double)placeHolderWidth;
- (id)placeholderColor;
- (double)placeholderExpandedWidth;
- (id)placeholderLabel;
- (id)placeholderText;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(bool)arg2;
- (bool)resignFirstResponder;
- (id)responseContext;
- (void)restoreKeyboardInputMode;
- (void)saveKeyboardInputMode;
- (id)savedKeyboardInputMode;
- (bool)sendCurrentLocationFromKeyboardEnabled;
- (void)setAdjustedLineFragmentPadding:(double)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setAutocorrectionContext:(id)arg1;
- (void)setCompositionText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHideCaret:(bool)arg1;
- (void)setPlaceHolderWidth:(double)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setPlaceholderExpandedWidth:(double)arg1;
- (void)setPlaceholderLabel:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setResponseContext:(id)arg1;
- (void)setSavedKeyboardInputMode:(id)arg1;
- (void)setSendCurrentLocationFromKeyboardEnabled:(bool)arg1;
- (void)setShowingDictationPlaceholder:(bool)arg1;
- (void)setUpdatesFontOnTextChange:(bool)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)updateFontIfNeeded;
- (void)updateTextView;
- (bool)updatesFontOnTextChange;

@end