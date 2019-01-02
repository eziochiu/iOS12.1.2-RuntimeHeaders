/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPTextWrapController : NSObject <TSWPTextWrap> {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _canvasSpaceToWrapSpace;
    TPDocumentRoot * _documentRoot;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _wrapSpaceToCanvasSpace;
}

@property (nonatomic, readonly) TPDocumentRoot *documentRoot;

- (void).cxx_destruct;
- (id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(bool*)arg3;
- (bool)checkForUnobstructedSpan:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (id)documentRoot;
- (id)initWithDocumentRoot:(id)arg1;
- (double)nextUnobstructedSpanStartingAt:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (id)p_groupInfoContainingWrappable:(id)arg1;
- (bool)p_shouldTextFlowAroundWrappable:(id)arg1 inTarget:(id)arg2 inColumn:(id)arg3;
- (unsigned int)p_splitLine:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineSegmentRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 wrappable:(id)arg3 cookie:(id)arg4 skipHint:(double*)arg5;
- (id)p_wrapDrawables:(id)arg1 userInfo:(id)arg2;
- (unsigned int)splitLine:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineSegmentRects:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(bool)arg4 canvasCausedWrap:(out bool*)arg5 skipHint:(out double*)arg6 userInfo:(id)arg7;

@end