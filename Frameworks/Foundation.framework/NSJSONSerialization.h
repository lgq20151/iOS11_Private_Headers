/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSJSONSerialization : NSObject {
    void * reserved;
}

+ (id)JSONObjectWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)JSONObjectWithStream:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dataWithJSONObject:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)isValidJSONObject:(id)arg1;
+ (long long)writeJSONObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

- (id)init;

@end
