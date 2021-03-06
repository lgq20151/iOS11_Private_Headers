/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFVectorOperation : NSObject <IFVectorOperation> {
    id /* block */  _b;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)operationWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)operate:(id)arg1 v2:(id)arg2;

@end
