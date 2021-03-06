/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface SDFResponseContainer : NSObject <NSSecureCoding> {
    NSFileHandle * _fileHandle;
    NSDictionary * _metadata;
    unsigned long long  _transferType;
    NSURL * _url;
}

@property (readonly, retain) NSFileHandle *fileHandle;
@property (readonly, retain) NSDictionary *metadata;
@property (readonly) unsigned long long transferType;
@property (readonly, retain) NSURL *url;

+ (id)containerWithFileHandle:(id)arg1 url:(id)arg2 transferType:(unsigned long long)arg3 metadata:(id)arg4;
+ (id)containerWithURL:(id)arg1 transferType:(unsigned long long)arg2 metadata:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileHandle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileHandle:(id)arg1 url:(id)arg2 transferType:(unsigned long long)arg3 metadata:(id)arg4;
- (id)initWithURL:(id)arg1 transferType:(unsigned long long)arg2 metadata:(id)arg3;
- (id)metadata;
- (unsigned long long)transferType;
- (id)url;

@end
