/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTTableDataObjectKeyDict : NSObject {
    struct hash_map<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int, TSTTableDataObjectHasher, TSTTableDataObjectEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int> > > { struct __hash_table<std::__1::pair<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>, __gnu_cxx::__hash_map_hasher<std::__1::pair<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>, TSTTableDataObjectHasher, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>, TSTTableDataObjectEqual, true>, std::__1::allocator<std::__1::pair<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>, void *> *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<SFUtility::ObjcSharedPtr<TSTTableDataObject>, unsigned int>, void *> *> *> > { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; } * mMap;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (unsigned int)keyForObject:(id)arg1;
- (void)removeAllKeys;
- (void)removeKeyForObject:(id)arg1;
- (void)setKey:(unsigned int)arg1 forObject:(id)arg2;

@end