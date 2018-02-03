/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSAttributeDictionaryEnumerator : NSEnumerator {
    NSAttributeDictionary * dictionary;
    unsigned long long  nextElement;
}

- (void)dealloc;
- (id)initWithAttributeDictionary:(id)arg1;
- (id)nextObject;

@end
