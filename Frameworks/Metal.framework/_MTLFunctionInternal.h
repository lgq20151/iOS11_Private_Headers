/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLFunctionInternal : _MTLFunction {
    NSString * _filePath;
    struct MTLFunctionData { 
        unsigned long long bitCodeOffset; 
        unsigned long long bitCodeFileSize; 
        unsigned long long publicArgumentsOffset; 
        unsigned long long privateArgumentsOffset; 
        unsigned short airMajorVersion; 
        unsigned short airMinorVersion; 
        unsigned short languageMajorVersion; 
        unsigned short languageMinorVersion; 
        struct { 
            unsigned char key[32]; 
        } bitcodeHash; 
        unsigned char bitcodeType; 
        unsigned int patchType : 2; 
        unsigned int controlPointCount : 6; 
        NSObject<OS_dispatch_data> *functionInputs; 
    }  _functionData;
    long long  _lineNumber;
    unsigned char  _privateMetadataInitialized;
    struct MTLProgramObject { struct VariantList<4> { struct Chunk { struct VariantEntry { char *x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; id x_1_3_5; unsigned long long x_1_3_6; id x_1_3_7; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_3_8; struct Chunk {} *x_1_3_9; } x_1_2_1[4]; } x_1_1_1; } x1; } * _programObject;
    unsigned char  _publicMetadataInitialized;
}

- (id).cxx_construct;
- (id)arguments;
- (unsigned long long)bitCodeFileSize;
- (const struct { unsigned char x1[32]; }*)bitCodeHash;
- (unsigned long long)bitCodeOffset;
- (unsigned char)bitcodeType;
- (void)dealloc;
- (id)filePath;
- (id)functionConstants;
- (id)functionConstantsDictionary;
- (const /* Warning: unhandled struct encoding: '{MTLFunctionData=QQQQSSSS{?=[32C]}Cb2b6@}' */ struct MTLFunctionData { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; struct { unsigned char x_9_1_1[32]; } x9; unsigned char x10; unsigned int x11 : 2; unsigned int x12 : 6; id x13; }*)functionData;
- (id)functionInputs;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(struct MTLLibraryData { int (**x1)(); int x2; id x3; }*)arg3 functionData:(/* Warning: unhandled struct encoding: '{MTLFunctionData=QQQQSSSS{?=[32C]}Cb2b6@}' */ struct MTLFunctionData { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; struct { unsigned char x_9_1_1[32]; } x9; unsigned char x10; unsigned int x11 : 2; unsigned int x12 : 6; id x13; }*)arg4 device:(id)arg5;
- (void)initializePrivateMetadata;
- (void)initializePublicMetadata;
- (long long)lineNumber;
- (bool)needsFunctionConstantValues;
- (void)newSpecializedFunctionWithConstants:(id)arg1 functionCache:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newSpecializedFunctionWithConstants:(id)arg1 functionCache:(id)arg2 error:(id*)arg3;
- (long long)patchControlPointCount;
- (unsigned long long)patchType;
- (struct MTLProgramObject { struct VariantList<4> { struct Chunk { struct VariantEntry { char *x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; id x_1_3_5; unsigned long long x_1_3_6; id x_1_3_7; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_3_8; struct Chunk {} *x_1_3_9; } x_1_2_1[4]; } x_1_1_1; } x1; }*)programObject;
- (id)returnType;
- (void)setArguments:(id)arg1;
- (void)setFilePath:(id)arg1;
- (void)setFunctionConstants:(id)arg1;
- (void)setLineNumber:(long long)arg1;
- (void)setReturnType:(id)arg1;
- (void)setStageInputAttributes:(id)arg1;
- (void)setVertexAttributes:(id)arg1;
- (id)stageInputAttributes;
- (id)vertexAttributes;

@end
