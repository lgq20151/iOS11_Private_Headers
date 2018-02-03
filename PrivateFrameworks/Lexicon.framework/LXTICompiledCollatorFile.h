/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Lexicon.framework/Lexicon
 */

@interface LXTICompiledCollatorFile : NSObject {
    int  m_descriptor;
    long long  m_length;
    char * m_mappedFile;
    NSString * m_path;
}

+ (struct UCollator { }*)createCollatorWithType:(int)arg1;
+ (id)sharedCollatorFile;

- (struct UCollator { }*)createCollatorWithType:(int)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 error:(unsigned int*)arg2;

@end
