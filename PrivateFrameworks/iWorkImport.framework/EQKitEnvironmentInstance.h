/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface EQKitEnvironmentInstance : EQKitEnvironment {
    NSDictionary * mConfig;
    struct Manager { int (**x1)(); struct Collection {} *x2; struct EQKitCacheLRUCounter { unsigned long long x_3_1_1; } x3; } * mFontManager;
    struct Manager { struct EQKitCache<EQKit::OpticalKern::Glyph::Key, std::__1::shared_ptr<EQKit::OpticalKern::Edge::Path>, std::__1::shared_ptr<const EQKit::OpticalKern::Edge::Path> > {} *x1; struct EQKitCacheLRUCounter { unsigned long long x_2_1_1; } x2; bool x3; struct QuantizationConfig { unsigned long long x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; } * mKerningManager;
    struct Config { int x1; bool x2; bool x3; bool x4; bool x5; } * mLayoutConfig;
    struct Dictionary { struct IdentifierMap { unsigned short x_1_1_1; struct map<std::__1::basic_string<char>, unsigned short, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned short> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, unsigned short> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; } * mOperatorDictionary;
}

@property (nonatomic) bool kerning;

+ (id)dataForEnvironment:(id)arg1;
+ (id)defaultEnvironment;
+ (id)environmentFromData:(id)arg1;

- (void)beginLayout;
- (void)dealloc;
- (void)endLayout;
- (const struct Manager { int (**x1)(); struct Collection {} *x2; struct EQKitCacheLRUCounter { unsigned long long x_3_1_1; } x3; }*)fontManager;
- (id)initWithConfig:(id)arg1;
- (bool)kerning;
- (const struct Manager { struct EQKitCache<EQKit::OpticalKern::Glyph::Key, std::__1::shared_ptr<EQKit::OpticalKern::Edge::Path>, std::__1::shared_ptr<const EQKit::OpticalKern::Edge::Path> > {} *x1; struct EQKitCacheLRUCounter { unsigned long long x_2_1_1; } x2; bool x3; struct QuantizationConfig { unsigned long long x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; }*)kerningManager;
- (const struct Config { int x1; bool x2; bool x3; bool x4; bool x5; }*)layoutConfig;
- (id)newDictionaryForArchiving;
- (const struct Dictionary { struct IdentifierMap { unsigned short x_1_1_1; struct map<std::__1::basic_string<char>, unsigned short, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned short> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, unsigned short> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, unsigned short>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_2_2_1; } x_1_1_2; } x1; }*)operatorDictionary;
- (void)setKerning:(bool)arg1;

@end
