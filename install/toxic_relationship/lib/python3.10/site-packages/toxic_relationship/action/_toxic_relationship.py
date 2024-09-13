# generated from rosidl_generator_py/resource/_idl.py.em
# with input from toxic_relationship:action/ToxicRelationship.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ToxicRelationship_Goal(type):
    """Metaclass of message 'ToxicRelationship_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('toxic_relationship')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'toxic_relationship.action.ToxicRelationship_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__toxic_relationship__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__toxic_relationship__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__toxic_relationship__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__toxic_relationship__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__toxic_relationship__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ToxicRelationship_Goal(metaclass=Metaclass_ToxicRelationship_Goal):
    """Message class 'ToxicRelationship_Goal'."""

    __slots__ = [
        '_toxicity_rate',
    ]

    _fields_and_field_types = {
        'toxicity_rate': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.toxicity_rate = kwargs.get('toxicity_rate', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.toxicity_rate != other.toxicity_rate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def toxicity_rate(self):
        """Message field 'toxicity_rate'."""
        return self._toxicity_rate

    @toxicity_rate.setter
    def toxicity_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'toxicity_rate' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'toxicity_rate' field must be an integer in [-2147483648, 2147483647]"
        self._toxicity_rate = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ToxicRelationship_Result(type):
    """Metaclass of message 'ToxicRelationship_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('toxic_relationship')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'toxic_relationship.action.ToxicRelationship_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__toxic_relationship__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__toxic_relationship__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__toxic_relationship__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__toxic_relationship__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__toxic_relationship__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ToxicRelationship_Result(metaclass=Metaclass_ToxicRelationship_Result):
    """Message class 'ToxicRelationship_Result'."""

    __slots__ = [
        '_living_status',
    ]

    _fields_and_field_types = {
        'living_status': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.living_status = kwargs.get('living_status', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.living_status != other.living_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def living_status(self):
        """Message field 'living_status'."""
        return self._living_status

    @living_status.setter
    def living_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'living_status' field must be of type 'bool'"
        self._living_status = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ToxicRelationship_Feedback(type):
    """Metaclass of message 'ToxicRelationship_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('toxic_relationship')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'toxic_relationship.action.ToxicRelationship_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__toxic_relationship__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__toxic_relationship__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__toxic_relationship__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__toxic_relationship__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__toxic_relationship__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ToxicRelationship_Feedback(metaclass=Metaclass_ToxicRelationship_Feedback):
    """Message class 'ToxicRelationship_Feedback'."""

    __slots__ = [
        '_feedback',
    ]

    _fields_and_field_types = {
        'feedback': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.feedback = kwargs.get('feedback', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'feedback' field must be of type 'str'"
        self._feedback = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ToxicRelationship_SendGoal_Request(type):
    """Metaclass of message 'ToxicRelationship_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('toxic_relationship')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'toxic_relationship.action.ToxicRelationship_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__toxic_relationship__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__toxic_relationship__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__toxic_relationship__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__toxic_relationship__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__toxic_relationship__send_goal__request

            from toxic_relationship.action import ToxicRelationship
            if ToxicRelationship.Goal.__class__._TYPE_SUPPORT is None:
                ToxicRelationship.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ToxicRelationship_SendGoal_Request(metaclass=Metaclass_ToxicRelationship_SendGoal_Request):
    """Message class 'ToxicRelationship_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'toxic_relationship/ToxicRelationship_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['toxic_relationship', 'action'], 'ToxicRelationship_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from toxic_relationship.action._toxic_relationship import ToxicRelationship_Goal
        self.goal = kwargs.get('goal', ToxicRelationship_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from toxic_relationship.action._toxic_relationship import ToxicRelationship_Goal
            assert \
                isinstance(value, ToxicRelationship_Goal), \
                "The 'goal' field must be a sub message of type 'ToxicRelationship_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ToxicRelationship_SendGoal_Response(type):
    """Metaclass of message 'ToxicRelationship_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('toxic_relationship')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'toxic_relationship.action.ToxicRelationship_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__toxic_relationship__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__toxic_relationship__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__toxic_relationship__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__toxic_relationship__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__toxic_relationship__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ToxicRelationship_SendGoal_Response(metaclass=Metaclass_ToxicRelationship_SendGoal_Response):
    """Message class 'ToxicRelationship_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_ToxicRelationship_SendGoal(type):
    """Metaclass of service 'ToxicRelationship_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('toxic_relationship')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'toxic_relationship.action.ToxicRelationship_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__toxic_relationship__send_goal

            from toxic_relationship.action import _toxic_relationship
            if _toxic_relationship.Metaclass_ToxicRelationship_SendGoal_Request._TYPE_SUPPORT is None:
                _toxic_relationship.Metaclass_ToxicRelationship_SendGoal_Request.__import_type_support__()
            if _toxic_relationship.Metaclass_ToxicRelationship_SendGoal_Response._TYPE_SUPPORT is None:
                _toxic_relationship.Metaclass_ToxicRelationship_SendGoal_Response.__import_type_support__()


class ToxicRelationship_SendGoal(metaclass=Metaclass_ToxicRelationship_SendGoal):
    from toxic_relationship.action._toxic_relationship import ToxicRelationship_SendGoal_Request as Request
    from toxic_relationship.action._toxic_relationship import ToxicRelationship_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ToxicRelationship_GetResult_Request(type):
    """Metaclass of message 'ToxicRelationship_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('toxic_relationship')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'toxic_relationship.action.ToxicRelationship_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__toxic_relationship__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__toxic_relationship__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__toxic_relationship__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__toxic_relationship__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__toxic_relationship__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ToxicRelationship_GetResult_Request(metaclass=Metaclass_ToxicRelationship_GetResult_Request):
    """Message class 'ToxicRelationship_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ToxicRelationship_GetResult_Response(type):
    """Metaclass of message 'ToxicRelationship_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('toxic_relationship')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'toxic_relationship.action.ToxicRelationship_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__toxic_relationship__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__toxic_relationship__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__toxic_relationship__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__toxic_relationship__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__toxic_relationship__get_result__response

            from toxic_relationship.action import ToxicRelationship
            if ToxicRelationship.Result.__class__._TYPE_SUPPORT is None:
                ToxicRelationship.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ToxicRelationship_GetResult_Response(metaclass=Metaclass_ToxicRelationship_GetResult_Response):
    """Message class 'ToxicRelationship_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'toxic_relationship/ToxicRelationship_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['toxic_relationship', 'action'], 'ToxicRelationship_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from toxic_relationship.action._toxic_relationship import ToxicRelationship_Result
        self.result = kwargs.get('result', ToxicRelationship_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from toxic_relationship.action._toxic_relationship import ToxicRelationship_Result
            assert \
                isinstance(value, ToxicRelationship_Result), \
                "The 'result' field must be a sub message of type 'ToxicRelationship_Result'"
        self._result = value


class Metaclass_ToxicRelationship_GetResult(type):
    """Metaclass of service 'ToxicRelationship_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('toxic_relationship')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'toxic_relationship.action.ToxicRelationship_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__toxic_relationship__get_result

            from toxic_relationship.action import _toxic_relationship
            if _toxic_relationship.Metaclass_ToxicRelationship_GetResult_Request._TYPE_SUPPORT is None:
                _toxic_relationship.Metaclass_ToxicRelationship_GetResult_Request.__import_type_support__()
            if _toxic_relationship.Metaclass_ToxicRelationship_GetResult_Response._TYPE_SUPPORT is None:
                _toxic_relationship.Metaclass_ToxicRelationship_GetResult_Response.__import_type_support__()


class ToxicRelationship_GetResult(metaclass=Metaclass_ToxicRelationship_GetResult):
    from toxic_relationship.action._toxic_relationship import ToxicRelationship_GetResult_Request as Request
    from toxic_relationship.action._toxic_relationship import ToxicRelationship_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ToxicRelationship_FeedbackMessage(type):
    """Metaclass of message 'ToxicRelationship_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('toxic_relationship')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'toxic_relationship.action.ToxicRelationship_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__toxic_relationship__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__toxic_relationship__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__toxic_relationship__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__toxic_relationship__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__toxic_relationship__feedback_message

            from toxic_relationship.action import ToxicRelationship
            if ToxicRelationship.Feedback.__class__._TYPE_SUPPORT is None:
                ToxicRelationship.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ToxicRelationship_FeedbackMessage(metaclass=Metaclass_ToxicRelationship_FeedbackMessage):
    """Message class 'ToxicRelationship_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'toxic_relationship/ToxicRelationship_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['toxic_relationship', 'action'], 'ToxicRelationship_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from toxic_relationship.action._toxic_relationship import ToxicRelationship_Feedback
        self.feedback = kwargs.get('feedback', ToxicRelationship_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from toxic_relationship.action._toxic_relationship import ToxicRelationship_Feedback
            assert \
                isinstance(value, ToxicRelationship_Feedback), \
                "The 'feedback' field must be a sub message of type 'ToxicRelationship_Feedback'"
        self._feedback = value


class Metaclass_ToxicRelationship(type):
    """Metaclass of action 'ToxicRelationship'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('toxic_relationship')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'toxic_relationship.action.ToxicRelationship')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__toxic_relationship

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from toxic_relationship.action import _toxic_relationship
            if _toxic_relationship.Metaclass_ToxicRelationship_SendGoal._TYPE_SUPPORT is None:
                _toxic_relationship.Metaclass_ToxicRelationship_SendGoal.__import_type_support__()
            if _toxic_relationship.Metaclass_ToxicRelationship_GetResult._TYPE_SUPPORT is None:
                _toxic_relationship.Metaclass_ToxicRelationship_GetResult.__import_type_support__()
            if _toxic_relationship.Metaclass_ToxicRelationship_FeedbackMessage._TYPE_SUPPORT is None:
                _toxic_relationship.Metaclass_ToxicRelationship_FeedbackMessage.__import_type_support__()


class ToxicRelationship(metaclass=Metaclass_ToxicRelationship):

    # The goal message defined in the action definition.
    from toxic_relationship.action._toxic_relationship import ToxicRelationship_Goal as Goal
    # The result message defined in the action definition.
    from toxic_relationship.action._toxic_relationship import ToxicRelationship_Result as Result
    # The feedback message defined in the action definition.
    from toxic_relationship.action._toxic_relationship import ToxicRelationship_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from toxic_relationship.action._toxic_relationship import ToxicRelationship_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from toxic_relationship.action._toxic_relationship import ToxicRelationship_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from toxic_relationship.action._toxic_relationship import ToxicRelationship_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
