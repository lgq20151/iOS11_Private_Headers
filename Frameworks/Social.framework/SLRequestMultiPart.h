/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLRequestMultiPart : NSObject {
    NSString * _filename;
    NSString * _multiPartBoundary;
    NSString * _name;
    NSData * _payload;
    NSString * _type;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSString *filename;
@property (nonatomic, copy) NSString *multiPartBoundary;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)multiPartWithName:(id)arg1 payload:(id)arg2 type:(id)arg3 multiPartBoundary:(id)arg4;

- (void).cxx_destruct;
- (id)filename;
- (unsigned long long)length;
- (id)multiPartBoundary;
- (id)multiPartHeader;
- (id)name;
- (id)partData;
- (id)payload;
- (id)payloadEpilogue;
- (id)payloadPreamble;
- (void)setFilename:(id)arg1;
- (void)setMultiPartBoundary:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (id)uniqueIdentifier;

@end