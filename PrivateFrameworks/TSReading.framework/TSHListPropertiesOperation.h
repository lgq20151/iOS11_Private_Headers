/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSHListPropertiesOperation : TSHXmlOperation {
    NSNumber * mDepth;
    long long  mHrefDepth;
    bool  mInHref;
    bool  mInProp;
    NSArray * mLimitedProperties;
    NSMutableDictionary * mNamespacePrefixes;
    long long  mParserDepth;
    NSMutableString * mPath;
    long long  mPropDepth;
    NSMutableDictionary * mProperties;
    NSString * mProperty;
}

- (void)appendValue:(id)arg1 toProperty:(id)arg2 atPath:(id)arg3;
- (void)dealloc;
- (id)depth;
- (id)description;
- (id)getProperty:(id)arg1 propertyNamespace:(id)arg2 href:(id)arg3;
- (id)initWithAccount:(id)arg1 andPath:(id)arg2 depth:(id)arg3 limitedProperties:(id)arg4 delegate:(id)arg5;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 persistence:(unsigned long long)arg4 depth:(id)arg5 limitedProperties:(id)arg6 delegate:(id)arg7;
- (id)namespacePrefixes;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)properties;
- (id)request;
- (void)start:(id)arg1 notifyWhenFinished:(id)arg2;

@end