/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDArrayIterator : WDIterator {
    NSArray * mArray;
    unsigned int  mNextIndex;
}

- (bool)hasNext;
- (id)initWithArray:(id)arg1;
- (id)next;

@end
