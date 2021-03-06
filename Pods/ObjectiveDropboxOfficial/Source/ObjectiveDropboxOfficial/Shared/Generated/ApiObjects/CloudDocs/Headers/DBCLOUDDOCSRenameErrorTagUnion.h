///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBCLOUDDOCSGenericErrorTag;
@class DBCLOUDDOCSLockingErrorTag;
@class DBCLOUDDOCSRenameErrorTag;
@class DBCLOUDDOCSRenameErrorTagUnion;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RenameErrorTagUnion` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBCLOUDDOCSRenameErrorTagUnion : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBCLOUDDOCSRenameErrorTagUnionTag` enum type represents the possible
/// tag states with which the `DBCLOUDDOCSRenameErrorTagUnion` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBCLOUDDOCSRenameErrorTagUnionTag){
    /// (no description).
    DBCLOUDDOCSRenameErrorTagUnionRenameError,

    /// (no description).
    DBCLOUDDOCSRenameErrorTagUnionGenericError,

    /// (no description).
    DBCLOUDDOCSRenameErrorTagUnionLockingError,

    /// (no description).
    DBCLOUDDOCSRenameErrorTagUnionOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBCLOUDDOCSRenameErrorTagUnionTag tag;

/// (no description). @note Ensure the `isRenameError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBCLOUDDOCSRenameErrorTag *renameError;

/// (no description). @note Ensure the `isGenericError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBCLOUDDOCSGenericErrorTag *genericError;

/// (no description). @note Ensure the `isLockingError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBCLOUDDOCSLockingErrorTag *lockingError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "rename_error".
///
/// @param renameError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithRenameError:(DBCLOUDDOCSRenameErrorTag *)renameError;

///
/// Initializes union class with tag state of "generic_error".
///
/// @param genericError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithGenericError:(DBCLOUDDOCSGenericErrorTag *)genericError;

///
/// Initializes union class with tag state of "locking_error".
///
/// @param lockingError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithLockingError:(DBCLOUDDOCSLockingErrorTag *)lockingError;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "rename_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `renameError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "rename_error".
///
- (BOOL)isRenameError;

///
/// Retrieves whether the union's current tag state has value "generic_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `genericError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "generic_error".
///
- (BOOL)isGenericError;

///
/// Retrieves whether the union's current tag state has value "locking_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `lockingError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "locking_error".
///
- (BOOL)isLockingError;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBCLOUDDOCSRenameErrorTagUnion` union.
///
@interface DBCLOUDDOCSRenameErrorTagUnionSerializer : NSObject

///
/// Serializes `DBCLOUDDOCSRenameErrorTagUnion` instances.
///
/// @param instance An instance of the `DBCLOUDDOCSRenameErrorTagUnion` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBCLOUDDOCSRenameErrorTagUnion` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBCLOUDDOCSRenameErrorTagUnion *)instance;

///
/// Deserializes `DBCLOUDDOCSRenameErrorTagUnion` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBCLOUDDOCSRenameErrorTagUnion` API object.
///
/// @return An instantiation of the `DBCLOUDDOCSRenameErrorTagUnion` object.
///
+ (DBCLOUDDOCSRenameErrorTagUnion *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
