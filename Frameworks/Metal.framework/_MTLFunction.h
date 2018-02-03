/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLFunction : NSObject <MTLFunctionSPI> {
    NSArray * _arguments;
    <MTLDevice> * _device;
    NSDictionary * _functionConstantDictionary;
    NSArray * _functionConstants;
    unsigned long long  _functionType;
    NSString * _label;
    struct MTLLibraryData { int (**x1)(); int x2; id x3; } * _libraryData;
    NSString * _name;
    MTLType * _returnType;
    id  _vendorPrivate;
    NSArray * _vertexAttributes;
}

@property NSArray *arguments;
@property (readonly) unsigned long long bitCodeOffset;
@property (readonly) unsigned char bitcodeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (copy) NSString *filePath;
@property NSArray *functionConstants;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (readonly) NSObject<OS_dispatch_data> *functionInputs;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) struct MTLLibraryData { int (**x1)(); int x2; id x3; }*libraryData;
@property long long lineNumber;
@property (readonly) NSString *name;
@property (readonly) bool needsFunctionConstantValues;
@property (readonly) long long patchControlPointCount;
@property (readonly) unsigned long long patchType;
@property MTLType *returnType;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) Class superclass;
@property (readonly) id vendorPrivate;
@property NSArray *vertexAttributes;

- (unsigned long long)bitCodeFileSize;
- (const struct { unsigned char x1[32]; }*)bitCodeHash;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functionConstantsDictionary;
- (unsigned long long)functionType;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)arg3 device:(id)arg4;
- (id)label;
- (struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)libraryData;
- (id)name;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (id)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (id)newSerializedVertexDataWithVertexDescriptor:(id)arg1;
- (id)reflectionWithOptions:(unsigned long long)arg1;
- (void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setLabel:(id)arg1;
- (void)setVendorPrivate:(id)arg1;
- (id)vendorPrivate;

@end
