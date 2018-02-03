/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINibDecoder : NSCoder {
    Class  arrayClass;
    Class * classes;
    id  delegate;
    Class  dictionaryClass;
    long long  failedByKeyMask;
    struct UINibDecoderHeader { 
        unsigned char type[10]; 
        unsigned int formatVersion; 
        unsigned int coderVersion; 
        struct UINibArchiveTableInfo { 
            unsigned int count; 
            unsigned int offset; 
        } objects; 
        struct UINibArchiveTableInfo { 
            unsigned int count; 
            unsigned int offset; 
        } keys; 
        struct UINibArchiveTableInfo { 
            unsigned int count; 
            unsigned int offset; 
        } values; 
        struct UINibArchiveTableInfo { 
            unsigned int count; 
            unsigned int offset; 
        } classes; 
    }  header;
    long long  inlinedValueKey;
    struct UIKeyToKeyIDCache { 
        NSString *previousKey[64]; 
        void *previousKeyID[64]; 
        bool previousKeyExists[64]; 
        long long hashHits; 
        long long hashHotMisses; 
        long long hashColdMisses; 
    }  keyIDCache;
    UINibStringIDTable * keyIDTable;
    unsigned int * keyMasks;
    unsigned int * longObjectClassIDs;
    long long  lookupRounds;
    long long  maxPossibleLookupRounds;
    id * missingClasses;
    struct UINibDecoderObjectEntry { unsigned int x1; unsigned int x2; } * objects;
    id * objectsByObjectID;
    struct UINibDecoderRecursiveState { 
        long long objectID; 
        long long nextGenericKey; 
        unsigned int nextValueSearchIndex; 
        bool replaced; 
    }  recursiveState;
    long long  savedByKeyMask;
    Class  setClass;
    char * shortObjectClassIDs;
    struct UIKeyAndScopeToValueCache { 
        unsigned int previousScope; 
        unsigned int previousKey; 
        struct UINibDecoderValue {} *previousValue; 
    }  valueCache;
    void * valueData;
    unsigned long long  valueDataSize;
    char * valueTypes;
    struct UINibDecoderValue { unsigned int x1; unsigned int x2; } * values;
}

@property id delegate;

+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithFile:(id)arg1;

- (bool)allowsKeyedCoding;
- (bool)containsValueForKey:(id)arg1;
- (void)dealloc;
- (bool)decodeArrayOfCGFloats:(double*)arg1 count:(long long)arg2 forKey:(id)arg3;
- (bool)decodeArrayOfDoubles:(double*)arg1 count:(long long)arg2 forKey:(id)arg3;
- (bool)decodeArrayOfFloats:(float*)arg1 count:(long long)arg2 forKey:(id)arg3;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void*)arg3;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })decodeCGAffineTransformForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })decodeCGPointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeCGRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeCGSizeForKey:(id)arg1;
- (id)decodeDataObject;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeNXObject;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodePropertyList;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })decodeUIEdgeInsetsForKey:(id)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (id)delegate;
- (void)finishDecoding;
- (id)initForReadingWithData:(id)arg1;
- (id)initForReadingWithData:(id)arg1 error:(id*)arg2;
- (id)nextGenericKey;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)setDelegate:(id)arg1;
- (unsigned int)systemVersion;
- (bool)validateAndIndexClasses:(const void*)arg1 length:(unsigned long long)arg2;
- (bool)validateAndIndexData:(id)arg1 error:(id*)arg2;
- (bool)validateAndIndexKeys:(const void*)arg1 length:(unsigned long long)arg2;
- (bool)validateAndIndexObjects:(const void*)arg1 length:(unsigned long long)arg2;
- (bool)validateAndIndexValues:(const void*)arg1 length:(unsigned long long)arg2;
- (long long)versionForClassName:(id)arg1;

@end
