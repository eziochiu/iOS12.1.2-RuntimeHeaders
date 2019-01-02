/* Generated by EzioChiu.
 */

@protocol UIWebAutoFillDelegate <NSObject>

@required

- (void)autoFillInWebBrowserView:(UIWebBrowserView *)arg1;
- (bool)hasCurrentSuggestionsForWebBrowserView:(UIWebBrowserView *)arg1;
- (void)webBrowserView:(UIWebBrowserView *)arg1 acceptedAutoFillWord:(NSString *)arg2;
- (void)webBrowserView:(UIWebBrowserView *)arg1 didBeginEditingTextField:(DOMHTMLInputElement *)arg2 inFrame:(WebFrame *)arg3;
- (void)webBrowserView:(UIWebBrowserView *)arg1 didEndEditingTextField:(DOMHTMLInputElement *)arg2 inFrame:(WebFrame *)arg3;
- (void)webBrowserView:(UIWebBrowserView *)arg1 didFocusTextField:(DOMHTMLInputElement *)arg2 inFrame:(WebFrame *)arg3;
- (void)webBrowserView:(UIWebBrowserView *)arg1 preFillInFrame:(WebFrame *)arg2;
- (NSArray *)webBrowserView:(UIWebBrowserView *)arg1 suggestionsForString:(NSString *)arg2;
- (void)webBrowserView:(UIWebBrowserView *)arg1 updateAutoFillButton:(UIBarButtonItem *)arg2;
- (void)webBrowserView:(void *)arg1 willSubmitForm:(void *)arg2 toFrame:(void *)arg3 fromFrame:(void *)arg4 withValues:(void *)arg5 submissionHandler:(void *)arg6; // needs 6 arg types, found 10: UIWebBrowserView *, DOMElement *, WebFrame *, WebFrame *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)webBrowserViewShouldShowAutoFillButton:(UIWebBrowserView *)arg1;

@optional

- (NSString *)titleOfAutoFillButtonInWebBrowserView:(UIWebBrowserView *)arg1;
- (void)webBrowserView:(UIWebBrowserView *)arg1 clearFormAutoFillStateForFrame:(WebFrame *)arg2;
- (void)webBrowserView:(UIWebBrowserView *)arg1 textDidChangeInTextField:(DOMHTMLInputElement *)arg2 inFrame:(WebFrame *)arg3;
- (void)webBrowserView:(UIWebBrowserView *)arg1 willSendSubmitEventToForm:(DOMHTMLFormElement *)arg2 inFrame:(WebFrame *)arg3 withValues:(NSDictionary *)arg4;

@end