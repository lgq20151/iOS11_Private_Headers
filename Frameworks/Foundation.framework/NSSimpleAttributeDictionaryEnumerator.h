/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator {
    NSSimpleAttributeDictionary * dictionary;
    unsigned long long  nextElement;
}

- (void)dealloc;
- (id)initWithAttributeDictionary:(id)arg1;
- (id)nextObject;

@end
