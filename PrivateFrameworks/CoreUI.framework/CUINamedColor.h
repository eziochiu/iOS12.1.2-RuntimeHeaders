/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUINamedColor : CUINamedLookup {
    struct CGColor { } * _cgColor;
    NSString * _colorName;
    long long  _displayGamut;
}

@property (nonatomic, readonly) struct CGColor { }*cgColor;
@property (nonatomic, readonly) long long displayGamut;
@property (nonatomic, readonly) bool substituteWithSystemColor;
@property (nonatomic, readonly) NSString *systemColorName;

- (struct CGColorSpace { }*)_colorSpaceWithID:(long long)arg1;
- (struct CGColor { }*)cgColor;
- (struct CGColor { }*)cgColorCreateCopyWithColorSpaceID:(long long)arg1;
- (void)dealloc;
- (long long)displayGamut;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (bool)substituteWithSystemColor;
- (id)systemColorName;

@end
