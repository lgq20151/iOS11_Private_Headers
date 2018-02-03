/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSArchiver : NSCoder {
    void * ids;
    void * map;
    void * mdata;
    void * pointerTable;
    void * replacementTable;
    void * reserved;
    void * stringTable;
}

@property (readonly, retain) NSMutableData *archiverData;

+ (bool)archiveRootObject:(id)arg1 toFile:(id)arg2;
+ (id)archivedDataWithRootObject:(id)arg1;
+ (id)classNameEncodedForTrueClassName:(id)arg1;
+ (void)encodeClassName:(id)arg1 intoClassName:(id)arg2;
+ (void)initialize;

- (id)archiverData;
- (id)classNameEncodedForTrueClassName:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void*)arg3;
- (void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)encodeClassName:(id)arg1 intoClassName:(id)arg2;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeDataObject:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeRootObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (id)initForWritingWithMutableData:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (long long)versionForClassName:(id)arg1;

@end
