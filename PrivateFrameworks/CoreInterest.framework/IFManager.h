/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFManager : NSObject

+ (bool)executeQuery:(id)arg1;
+ (void)processTopic:(id)arg1 query:(id)arg2;
+ (void)propagateDown:(id)arg1 score:(double)arg2 root:(id)arg3 distance:(unsigned long long)arg4;
+ (void)propagateUp:(id)arg1 score:(double)arg2 parent:(id)arg3 distance:(unsigned long long)arg4;
+ (bool)provideIndication:(id)arg1 forTopic:(id)arg2;
+ (id)rankDocuments:(id)arg1 withTopics:(id)arg2;

@end
