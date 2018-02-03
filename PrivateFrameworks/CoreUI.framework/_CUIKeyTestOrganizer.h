/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface _CUIKeyTestOrganizer : NSObject {
    unsigned long long  chooseCount;
    unsigned long long  flexAttributesCount;
    NSArray * orderedNonZeroFlexibleAttributes;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    }  originalKey;
    unsigned long long  subchooseCount;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    }  testKey;
}

- (unsigned long long)_attributeToBumpIndex;
- (void)_bumpTestKey;
- (bool)_bumpTestKeyAttributeIndex:(unsigned long long)arg1;
- (id)_nonZeroFlexibleAttributesInKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)dealloc;
- (id)initWithRenditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)nextKey;

@end
