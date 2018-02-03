/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebBasePluginPackage : NSObject {
    int (* BP_CreatePluginMIMETypesPreferences;
    struct RetainPtr<__CFBundle *> { 
        void *m_ptr; 
    }  cfBundle;
    struct String { 
        struct RefPtr<WTF::StringImpl> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    }  path;
    NSMutableSet * pluginDatabases;
    struct PluginInfo { 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } name; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } file; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } desc; 
        struct Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow, 16> { 
            struct MimeClassInfo {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } mimes; 
        bool isApplicationPlugin; 
        unsigned char clientLoadPolicy; 
    }  pluginInfo;
}

+ (void)initialize;
+ (id)pluginWithPath:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)MIMETypeForExtension:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (id)_objectForInfoDictionaryKey:(id)arg1;
- (struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; })bundleIdentifier;
- (struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; })bundleVersion;
- (void)createPropertyListFile;
- (void)dealloc;
- (bool)getPluginInfoFromPLists;
- (id)initWithPath:(id)arg1;
- (bool)isJavaPlugIn;
- (bool)isNativeLibraryData:(id)arg1;
- (bool)isQuickTimePlugIn;
- (bool)load;
- (id)pListForPath:(id)arg1 createFile:(bool)arg2;
- (const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)path;
- (const struct PluginInfo { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow, 16> { struct MimeClassInfo {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; bool x5; unsigned char x6; }*)pluginInfo;
- (bool)supportsExtension:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (bool)supportsMIMEType:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (void)unload;
- (unsigned int)versionNumber;
- (void)wasAddedToPluginDatabase:(id)arg1;
- (void)wasRemovedFromPluginDatabase:(id)arg1;

@end
