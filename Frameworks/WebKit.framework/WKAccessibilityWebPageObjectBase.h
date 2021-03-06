/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKAccessibilityWebPageObjectBase : NSObject {
    struct WebPage { int (**x1)(); id x2; int (*x3)(); int (**x4)(); unsigned long long x5; struct unique_ptr<WebCore::Page, std::__1::default_delete<WebCore::Page> > { struct __compressed_pair<WebCore::Page *, std::__1::default_delete<WebCore::Page> > { struct Page {} *x_1_2_1; } x_6_1_1; } x6; struct RefPtr<WebKit::WebFrame, WTF::DumbPtrTraits<WebKit::WebFrame> > { struct WebFrame {} *x_7_1_1; } x7; struct RefPtr<WebKit::InjectedBundleBackForwardList, WTF::DumbPtrTraits<WebKit::InjectedBundleBackForwardList> > { struct InjectedBundleBackForwardList {} *x_8_1_1; } x8; struct RefPtr<WebKit::WebPageGroupProxy, WTF::DumbPtrTraits<WebKit::WebPageGroupProxy> > { struct WebPageGroupProxy {} *x_9_1_1; } x9; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_10_1_1; } x10; struct IntSize { int x_11_1_1; int x_11_1_2; } x11; struct unique_ptr<WebKit::DrawingArea, std::__1::default_delete<WebKit::DrawingArea> > { struct __compressed_pair<WebKit::DrawingArea *, std::__1::default_delete<WebKit::DrawingArea> > { struct DrawingArea {} *x_1_2_1; } x_12_1_1; } x12; } * m_page;
    id  m_parent;
}

- (id)accessibilityFocusedUIElement;
- (id)accessibilityRootObjectWrapper;
- (void)setRemoteParent:(id)arg1;
- (void)setWebPage:(struct WebPage { int (**x1)(); id x2; int (*x3)(); int (**x4)(); unsigned long long x5; struct unique_ptr<WebCore::Page, std::__1::default_delete<WebCore::Page> > { struct __compressed_pair<WebCore::Page *, std::__1::default_delete<WebCore::Page> > { struct Page {} *x_1_2_1; } x_6_1_1; } x6; struct RefPtr<WebKit::WebFrame, WTF::DumbPtrTraits<WebKit::WebFrame> > { struct WebFrame {} *x_7_1_1; } x7; struct RefPtr<WebKit::InjectedBundleBackForwardList, WTF::DumbPtrTraits<WebKit::InjectedBundleBackForwardList> > { struct InjectedBundleBackForwardList {} *x_8_1_1; } x8; struct RefPtr<WebKit::WebPageGroupProxy, WTF::DumbPtrTraits<WebKit::WebPageGroupProxy> > { struct WebPageGroupProxy {} *x_9_1_1; } x9; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_10_1_1; } x10; struct IntSize { int x_11_1_1; int x_11_1_2; } x11; struct unique_ptr<WebKit::DrawingArea, std::__1::default_delete<WebKit::DrawingArea> > { struct __compressed_pair<WebKit::DrawingArea *, std::__1::default_delete<WebKit::DrawingArea> > { struct DrawingArea {} *x_1_2_1; } x_12_1_1; } x12; }*)arg1;

@end
