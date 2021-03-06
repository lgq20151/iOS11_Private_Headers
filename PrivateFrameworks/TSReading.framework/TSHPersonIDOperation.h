/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHPersonIDOperation : TSHXmlOperation {
    long long  mHrefCount;
    bool  mInHref;
    NSString * mPersonID;
}

- (void)dealloc;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 delegate:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)personID;
- (id)request;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;

@end
