/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteMapTableValueEnumerator : NSEnumerator {
    unsigned long long  counter;
    NSConcreteMapTable * mapTable;
}

+ (id)enumeratorWithMapTable:(id)arg1;

- (void)dealloc;
- (id)nextObject;

@end
