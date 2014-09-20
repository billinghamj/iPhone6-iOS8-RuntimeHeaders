/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSDictionary, NSData, NSURL;

@interface NSFileWrapper : NSObject <NSCoding> {
    NSDictionary *_fileAttributes;
    NSString *_preferredFileName;
    NSString *_fileName;
    id _contents;
    id _icon;
    id _moreVars;
}

@property(getter=isDirectory,readonly) bool directory;
@property(getter=isRegularFile,readonly) bool regularFile;
@property(getter=isSymbolicLink,readonly) bool symbolicLink;
@property(copy) NSString * preferredFilename;
@property(copy) NSString * filename;
@property(copy) NSDictionary * fileAttributes;
@property(copy,readonly) NSData * serializedRepresentation;
@property(copy,readonly) NSDictionary * fileWrappers;
@property(copy,readonly) NSData * regularFileContents;
@property(copy,readonly) NSURL * symbolicLinkDestinationURL;

+ (void)initialize;
+ (id)_newContentsAtURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 oldChildrenByUniqueFileName:(id)arg4 options:(unsigned long long)arg5 error:(id*)arg6;
+ (bool)_forPath:(id)arg1 getItemKind:(id*)arg2 modificationDate:(id*)arg3;
+ (bool)_canSafelyMapFilesAtPath:(id)arg1;
+ (bool)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4;
+ (bool)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id*)arg6;
+ (id)_temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id*)arg2;
+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;
+ (void)_writeAttributes:(id)arg1 toURL:(id)arg2;
+ (id)_pathForURL:(id)arg1 reading:(bool)arg2 error:(id*)arg3;

- (void)setPreferredFilename:(id)arg1;
- (id)initRegularFileWithContents:(id)arg1;
- (void)setFilename:(id)arg1;
- (id)filename;
- (id)fileAttributes;
- (bool)isDirectory;
- (bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4;
- (id)regularFileContents;
- (bool)isRegularFile;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)_init;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (id)initSymbolicLinkWithDestinationURL:(id)arg1;
- (id)initDirectoryWithFileWrappers:(id)arg1;
- (id)serializedRepresentation;
- (id)_uniqueFileNameOfChild:(id)arg1;
- (void)_resetFileModificationDate;
- (id)keyForFileWrapper:(id)arg1;
- (void)_addParent:(id)arg1;
- (id)_newImpl;
- (id)_attributesToWrite;
- (bool)_writeContentsToURL:(id)arg1 path:(id)arg2 originalContentsURL:(id)arg3 tryHardLinking:(bool)arg4 didHardLinking:(bool*)arg5 error:(id*)arg6;
- (void)_updateDescendantFileNames;
- (id)symbolicLinkDestinationURL;
- (void)_forWritingToURL:(id)arg1 returnContentsLazyReadingError:(id*)arg2;
- (void)setFileAttributes:(id)arg1;
- (void)_removeChild:(id)arg1 forUniqueFileName:(id)arg2;
- (bool)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)matchesContentsOfURL:(id)arg1;
- (bool)_matchesItemKind:(id)arg1 modificationDate:(id)arg2;
- (bool)isSymbolicLink;
- (void)_observePreferredFileNameOfChild:(id)arg1;
- (id)addFileWrapper:(id)arg1;
- (void)removeFileWrapper:(id)arg1;
- (id)fileWrappers;
- (void)_removeParent:(id)arg1;
- (id)_initWithImpl:(id)arg1 preferredFileName:(id)arg2 uniqueFileName:(id)arg3 docInfo:(id)arg4 iconData:(id)arg5;
- (void)_initDirectoryContents;
- (id)_addChild:(id)arg1 forUniqueFileName:(id)arg2;
- (id)preferredFilename;
- (bool)_readContentsFromURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5;
- (id)_fullDescription:(bool)arg1;

@end